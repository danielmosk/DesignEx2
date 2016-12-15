# DesignEx2

### Usage Example
```objective-c
SessionInterpreter *interpreter = [[SessionInterpreter alloc] init];
SessionStorage *sessionStorage = [[SessionStorage] init];
Texture *inputTexture; 
Texture *outputTexture;

ImageSessionManager *imageSessionManager = [ImageSessionManager alloc] 
initWithImage:inputTexture
withSessionInterpreter:interpreter
withSessionStorage:sessionStorage]

// initialize
ImageSession *imageSession = [[ImageSession alloc] initWithImage:inputTexture];

// Execute
BrightnessTool brightnessTool = [[BrightnessTool alloc] init];
brightnessTool.value = 0.5;
outputTexture = [brightnessTool performOnTexture:inputTexture];

// Save the create operation
[imageSession addOperation:[[CreationOperation alloc] initWithTool:brightnessTool]];

// Change value - slider event (onTouchUp)
brightnessTool.value = 0.7;
outputTexture = [brightnessTool performOnTexture:inputTexture];

// Save the update operation
[imageSession addOperation:[[UpdatingOperation alloc] initWithTool:brightnessTool]];

// Undo operation
[[imageSession previousOperation] key]; //{"update brightness_0 value:20"}

// Redo operation
[imageSession nextOperation];

// Save session

// Restore session

// Restore image
```
