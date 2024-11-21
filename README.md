# GameProjectV2
This is a personal project where I aim to create a text-based RPG in the terminal.

## Table of Contents
1. [Installation][#installation]
2. [Guide][#guide]
3. [Roadmap][#roadmap]
4. [Phases][#phases]

## Installation

## Guide

## Roadmap

# Project Milestones

## Phase 1: Core Game Functionality

### Overview
Establish the foundational components of the game, focusing on core architecture, character management, and basic gameplay loop.

---

### Milestones

#### Core Architecture
- [x] Implement `StateManager` for managing game states.
- [x] Define the `State` base class and derive specific states:
  - `MainMenuState`
  - `CharacterCreationState`
  - `ExitState`
- [x] Develop a robust and flexible `Game` loop to handle state transitions and user input.

#### Character Management
- [x] Implement `Character` and `Stats` classes for encapsulating character attributes.
- [x] Create `CharacterManager` for:
  - Creating a character.
  - Saving and loading character data to/from JSON files.
  - Listing and selecting characters.

#### State Functionality
- [x] Implement functionality for each state:
  - `MainMenuState`: Options for creating, loading, and exiting.
  - `CharacterCreationState`: Prompt user for input and validate.
  - `ExitState`: Terminate the game loop.

#### User Interaction
- [x] Input handling with validation.
- [x] Display menus and prompts dynamically based on game state.

#### Testing
- [ ] Unit tests for `StateManager`, `CharacterManager`, and `Game`.
- [ ] Integration tests for seamless interaction between components.

---

### Deliverables
- Functional game with character creation and management.
- Fully tested core codebase.

---

## Phase 2: Enhanced Gameplay Mechanics

### Overview
Expand gameplay to include more dynamic interactions, enhanced character attributes, and an inventory system.

---

### Milestones

#### Character Enhancements
- [ ] Add leveling system for characters.
- [ ] Introduce experience points and level-based stat improvements.
- [ ] Expand character stats (e.g., agility, intelligence).

#### Inventory System
- [ ] Implement `Inventory` class to manage items.
- [ ] Add basic item attributes (e.g., name, type, effects).
- [ ] Create `ItemManager` for adding, removing, and modifying items.

#### Combat System
- [ ] Introduce `CombatState` for engaging enemies.
- [ ] Design turn-based combat mechanics with attack, defend, and item use options.
- [ ] Create basic enemy AI.

#### Enhanced User Interaction
- [ ] Improve menu navigation.
- [ ] Add colorful output and formatting for better readability.

#### Testing
- [ ] Unit tests for inventory, combat, and leveling systems.
- [ ] Integration tests for seamless transitions between combat and other states.

---

### Deliverables
- Expanded gameplay with combat and inventory management.
- Fully functional and interactive game loop.

---

## Phase 3: Persistent World and Advanced Features

### Overview
Introduce persistence, world-building, and advanced features to create a more immersive experience.

---

### Milestones

#### Persistent World
- [ ] Implement `WorldManager` for managing dungeons and maps.
- [ ] Save and load world progress.

#### Exploration Mechanics
- [ ] Add `ExplorationState` for dungeon crawling.
- [ ] Generate procedural or predefined dungeons.

#### Advanced Combat and Enemy AI
- [ ] Enhance combat with skills and special moves.
- [ ] Introduce complex enemy behaviors and boss fights.

#### Polishing and Improvements
- [ ] Refactor and optimize the codebase.
- [ ] Add sound and animations (if applicable).
- [ ] Improve error handling and edge case management.

#### Testing
- [ ] Comprehensive unit and integration testing for world management and exploration.

---

### Deliverables
- A persistent world where players can explore, combat, and save progress.
- Polished, fully interactive, and immersive gameplay experience.

---

## Phase 4: Multiplayer and Community Features (Optional)

### Overview
Add multiplayer features and community-driven content for long-term engagement.

---

### Milestones

#### Multiplayer Features
- [ ] Add support for local or online multiplayer.
- [ ] Design cooperative or competitive gameplay modes.

#### Community Content
- [ ] Enable modding or custom character creation.
- [ ] Allow players to share dungeons or challenges.

#### Testing and Deployment
- [ ] Stress test multiplayer functionality.
- [ ] Ensure compatibility across different environments.

---

### Deliverables
- A multiplayer-capable game with community-driven content.
- Scalable and robust deployment-ready system.


