signed int __fastcall sub_8086CF4(int a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  char v3; // r0@1
  char v4; // r0@1
  signed int v5; // r1@2
  signed __int16 v7; // [sp+0h] [bp-10h]@1

  v1 = a1;
  CameraObjectReset2();
  v2 = &dword_30048A0[9 * v202E85D];
  v3 = GetFaceDirectionAnimId(4u);
  FieldObjectSetSpecialAnim(v2, v3);
  PlayerGetDestCoords(&v7, &v7 + 1);
  v4 = MapGridGetMetatileBehaviorAt(v7, *(&v7 + 1));
  ++*(_WORD *)(v1 + 8);
  *(_WORD *)(v1 + 10) = 16;
  if ( v4 == 107 )
  {
    v5 = 1;
    *(_WORD *)(v1 + 8) = 3;
  }
  else
  {
    v5 = 0;
  }
  sub_80B4824(v5);
  return 1;
}
