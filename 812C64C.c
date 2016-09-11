int __fastcall sub_812C64C(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r7@1
  int *v3; // r1@1
  __int16 v4; // r0@1
  _WORD *v5; // r1@2
  __int16 v6; // r6@2
  signed int v7; // r4@2
  int v8; // r5@2
  _WORD *v9; // r3@2
  _WORD *v10; // r1@4
  __int16 v11; // r6@4
  signed int v12; // r4@4
  _WORD *v13; // r2@4
  int v15; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sub_80789BC();
  v3 = &dword_3004B20[10 * v1];
  v4 = *((_WORD *)v3 + 9) + 1;
  *((_WORD *)v3 + 9) = v4;
  if ( v4 == 4 )
  {
    v5 = (_WORD *)(2 * (16 * v2 + 11) + 33746632);
    v6 = *(_WORD *)(2 * (16 * v2 + 11) + 0x202EEC8);
    v7 = 10;
    v8 = 16 * v2;
    v9 = (_WORD *)(32 * v2 + 33746652);
    do
    {
      *v5 = *v9;
      --v9;
      --v5;
      --v7;
    }
    while ( v7 > 0 );
    *(_WORD *)(2 * (v8 + 1) + 0x202EEC8) = v6;
    v10 = (_WORD *)(2 * (v8 + 11) + 33745608);
    v11 = *(_WORD *)(2 * (v8 + 11) + 0x202EAC8);
    v12 = 10;
    v13 = (_WORD *)(32 * v2 + 33745628);
    do
    {
      *v10 = *v13;
      --v13;
      --v10;
      --v12;
    }
    while ( v12 > 0 );
    *(_WORD *)(2 * (v8 + 1) + 0x202EAC8) = v11;
    HIWORD(dword_3004B20[10 * v1 + 4]) = 0;
  }
  if ( (unsigned __int16)word_3004B0E == 0xFFFF )
    DestroyTask(v1);
  return v15;
}
