#pragma once
#include <iostream>
#include <sapi.h>

namespace PFunc {

    void TTS(std::string text)
    {
        ISpVoice* pVoice = NULL;

        if (FAILED(::CoInitialize(NULL)))
            return;

        std::wstring stemp = std::wstring(text.begin(), text.end());
        LPCWSTR sw = stemp.c_str();

        HRESULT hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void**)&pVoice);
        if (SUCCEEDED(hr))
        {
            hr = pVoice->Speak(sw, SPF_IS_XML, NULL);
            pVoice->Release();
            pVoice = NULL;
        }

        ::CoUninitialize();
        return;
    }


}