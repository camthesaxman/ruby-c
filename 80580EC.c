int CameraUpdate()
{
  __int16 v0; // r7@3
  __int16 v1; // r8@3
  int v2; // r4@3
  int v3; // r5@3
  int v4; // r0@21
  int v5; // r4@21
  int v6; // r5@21
  int v8; // [sp+14h] [bp-4h]@0

  if ( dword_3004880 )
    call_via_r1(&dword_3004880, dword_3004880);
  v0 = dword_3004888;
  v1 = dword_300488C;
  v2 = 0;
  v3 = 0;
  if ( !dword_3004890 )
  {
    if ( dword_3004888 )
    {
      v2 = -1;
      if ( dword_3004888 > 0 )
        v2 = 1;
    }
  }
  if ( !dword_3004894 )
  {
    if ( dword_300488C )
    {
      v3 = -1;
      if ( dword_300488C > 0 )
        v3 = 1;
    }
  }
  if ( dword_3004890 )
  {
    if ( !(dword_3004890 + dword_3004888) )
    {
      v2 = -1;
      if ( dword_3004888 > 0 )
        v2 = 1;
    }
  }
  if ( dword_3004894 )
  {
    if ( !(dword_3004894 + dword_300488C) )
    {
      v2 = -1;
      if ( dword_300488C > 0 )
        v2 = 1;
    }
  }
  dword_3004890 += dword_3004888;
  dword_3004890 %= 16;
  dword_3004894 = (dword_3004894 + dword_300488C) % 16;
  if ( v2 || v3 )
  {
    CameraMove(v2, v3);
    UpdateFieldObjectsForCameraUpdate(v2, v3);
    v4 = RotatingGatePuzzleCameraUpdate(v2, v3);
    ResetBerryTreeSparkleFlags(v4);
    v5 = 2 * v2;
    v6 = 2 * v3;
    tilemap_move_something((int)&byte_3000590, v5, v6);
    RedrawMapSlicesForCameraUpdate((int)&byte_3000590, v5, v6);
  }
  coords8_add((int)&byte_3000590, v0, v1);
  word_300489C -= v0;
  word_3004898 -= v1;
  return v8;
}
