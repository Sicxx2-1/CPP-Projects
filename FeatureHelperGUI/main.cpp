#include "imgui.h"
#include "imgui_impl_sdl2.h"
#include "imgui_impl_opengl3.h"
#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Structure to store feature ownership data
struct FeatureData {
    string ownerName;
    string featureName;
    string subfeature;
    int numOfAssets;
    double scriptedTime;
    double unscriptedTime;
    double totalTime;
};

// Function to calculate time estimates
FeatureData calculateTime(string ownerName, string featureName, string subfeature, int numOfAssets) {
    double scriptedTime = 0, unscriptedTime = 0, totalTime = 0;

    if (subfeature == "Holosprays") {
        scriptedTime = (numOfAssets * 0.26) + 0.11;
        unscriptedTime = numOfAssets * 0;
    }
    else if (subfeature == "Weapon Skins (Epic)") {
        scriptedTime = ((numOfAssets * 0.18) + (numOfAssets * 0.41));
        unscriptedTime = numOfAssets * 0;
    }
    else {
        scriptedTime = (numOfAssets * 0.3);
        unscriptedTime = numOfAssets * 0.1;
    }

    totalTime = scriptedTime + unscriptedTime;
    return { ownerName, featureName, subfeature, numOfAssets, scriptedTime, unscriptedTime, totalTime };
}

// Function to save results to CSV
void saveToCSV(const vector<FeatureData>& data) {
    ofstream file("FeatureOwnershipReport.csv");

    if (!file.is_open()) return;

    file << "Owner Name,Feature Name,Subfeature,Number of Assets,Scripted Time,Unscripted Time,Total Time\n";

    for (const auto& entry : data) {
        file << entry.ownerName << "," << entry.featureName << "," << entry.subfeature << ","
            << entry.numOfAssets << "," << entry.scriptedTime << "," << entry.unscriptedTime << "," << entry.totalTime << "\n";
    }

    file.close();
}

int main(int, char**) {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMECONTROLLER) != 0) {
        printf("Error: %s\n", SDL_GetError());
        return -1;
    }

    SDL_Window* window = SDL_CreateWindow("Feature Ownership Tracker", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_MakeCurrent(window, gl_context);
    SDL_GL_SetSwapInterval(1);

    glewInit();
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGui_ImplSDL2_InitForOpenGL(window, gl_context);
    ImGui_ImplOpenGL3_Init("#version 130");

    vector<FeatureData> featureRecords;

    char ownerName[128] = "";
    char featureName[128] = "";
    int numOfAssets = 0;
    const char* subfeatures[] = { "Holosprays", "Weapon Skins (Epic)", "Intro Quips", "Kill Quips" };
    int subfeatureIndex = 0;

    bool running = true;
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            ImGui_ImplSDL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                running = false;
        }

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplSDL2_NewFrame();
        ImGui::NewFrame();

        ImGui::Begin("Feature Ownership Tracker");

        ImGui::InputText("Owner Name", ownerName, IM_ARRAYSIZE(ownerName));
        ImGui::InputText("Feature Name", featureName, IM_ARRAYSIZE(featureName));
        ImGui::Combo("Subfeature", &subfeatureIndex, subfeatures, IM_ARRAYSIZE(subfeatures));
        ImGui::InputInt("Number of Assets", &numOfAssets);

        if (ImGui::Button("Calculate & Save")) {
            FeatureData data = calculateTime(ownerName, featureName, subfeatures[subfeatureIndex], numOfAssets);
            featureRecords.push_back(data);
            saveToCSV(featureRecords);
        }

        ImGui::Separator();
        ImGui::Text("Stored Entries:");
        for (const auto& entry : featureRecords) {
            ImGui::Text("%s | %s | %s | Assets: %d | Total Time: %.2f hrs",
                entry.ownerName.c_str(), entry.featureName.c_str(), entry.subfeature.c_str(),
                entry.numOfAssets, entry.totalTime);
        }

        ImGui::End();
        ImGui::Render();
        SDL_GL_MakeCurrent(window, gl_context);
        glViewport(0, 0, 800, 600);
        glClearColor(0.45f, 0.55f, 0.60f, 1.00f);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }

    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplSDL2_Shutdown();
    ImGui::DestroyContext();
    SDL_GL_DeleteContext(gl_context);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}