#pragma once

#include "ToolboxWidget.h"

class TimerWidget : public ToolboxWidget {
	TimerWidget() {};
	~TimerWidget() {};
public:
	static TimerWidget& Instance() {
		static TimerWidget instance;
		return instance;
	}
	const char* Name() const override { return "Timer"; }

	void LoadSettings(CSimpleIni *ini) override;
	void SaveSettings(CSimpleIni *ini) override;
	void DrawSettingInternal() override;

	// Draw user interface. Will be called every frame if the element is visible
	void Draw(IDirect3DDevice9* pDevice) override;

	bool click_to_print_time;
};
