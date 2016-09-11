int __fastcall sub_8002E4C(int a1, int a2, __int16 a3, char a4, __int16 a5, int a6)
{
  int v6; // r7@1
  char v7; // r4@1
  signed int v8; // r0@1
  int v10; // [sp+14h] [bp-4h]@0

  v6 = a1;
  v7 = a4;
  InitWindow(a1, a2, a3, 0, 0);
  *(_BYTE *)(v6 + 18) = v7;
  *(_WORD *)(v6 + 20) = a5;
  v8 = 0;
  if ( a6 )
    v8 = 255;
  *(_BYTE *)(v6 + 15) = v8;
  if ( v8 )
    ClipLeft(v6);
  return v10;
}
