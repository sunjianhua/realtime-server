// Fill out your copyright notice in the Description page of Project Settings.

#include "ActionClient.h"
#include "ActionMath.h"
//
//ActionMath::ActionMath()
//{
//}
//
//ActionMath::~ActionMath()
//{
//}



#include <random>

const Vector3 Vector3::Zero( 0.0f, 0.0f, 0.0f );
const Vector3 Vector3::UnitX( 1.0f, 0.0f, 0.0f );
const Vector3 Vector3::UnitY( 0.0f, 1.0f, 0.0f );
const Vector3 Vector3::UnitZ( 0.0f, 0.0f, 1.0f );

float ActionMath::GetRandomFloat()
{
	static std::random_device rd;
	static std::mt19937 gen( rd() );
	static std::uniform_real_distribution< float > dis( 0.f, 1.f );
	return dis( gen );
}

Vector3 ActionMath::GetRandomVector( const Vector3& inMin, const Vector3& inMax )
{
	Vector3 r = Vector3( GetRandomFloat(), GetRandomFloat(), GetRandomFloat() );
	return inMin + ( inMax - inMin ) * r;
}