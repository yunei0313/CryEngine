﻿#pragma once


//=====================================================================================================================
// @brief	IDxRenderElement
//=====================================================================================================================
class IDxRenderElement
{
protected:
    int RenderCount;

public:
    // Constructor
    IDxRenderElement() : RenderCount( 0 ) {}

    // Destructor
    virtual ~IDxRenderElement() = default;

    // Increase render count
    void IncreaseRenderCount() { ++RenderCount; }

    // Decrease render count
    void DecreaseRenderCount() { --RenderCount; }

    // Set render count
    void SetRenderCount( int InRenderCount ) { RenderCount = InRenderCount; }

    // Clear render count
    void ClearRenderCount() { RenderCount = 0; }

    // Get render count
    int GetRenderCount() const { return RenderCount; }

    // Pre render
    virtual void PreRender() const {}

    // On render 
    virtual void OnRender() const {}
};