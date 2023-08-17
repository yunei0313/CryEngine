﻿#pragma once


#include "../CrActor.h"


class CrCamera : public CrActor
{
public:
    Vector3 LookAtDirection;
    float   FovDegree;
    float   NearDistance;
    float   FarDistance;

public:
    // Constructor
    CrCamera();

    // Set look at direction
    void SetLookAtDirection( const Vector3& direction );

    // Look at location
    void LookAt( const Vector3& location );

    // Get view matrix
    Matrix GetViewMatrix() const;

    // Get projection matrix
    Matrix GetProjectionMatrix( float ViewportWidth, float ViewportHeight ) const;
};
