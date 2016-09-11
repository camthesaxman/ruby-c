int __fastcall sub_80B47D8(__int16 a1)
{
  __int16 v1; // r5@1
  unsigned __int8 v2; // r0@1
  int v3; // r4@1
  _BYTE *v4; // r7@1
  int v5; // r1@1

  v1 = a1;
  v2 = CreateTask((int)sub_80B4710, 0);
  v3 = v2;
  v4 = &byte_3004B28[40 * v2];
  PlayerGetDestCoords((_WORD *)v4 + 4, (_WORD *)v4 + 5);
  *(_WORD *)v4 = 0;
  *((_WORD *)v4 + 1) = 0;
  *((_WORD *)v4 + 2) = v1;
  call_via_r6(v3, v5);
  return v3;
}
