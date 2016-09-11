int __fastcall sub_812C588(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r6@1
  int *v3; // r1@1
  __int16 v4; // r0@1
  _WORD *v5; // r1@2
  __int16 v6; // r8@2
  signed int v7; // r3@2
  _WORD *v8; // r2@2
  int v10; // [sp+18h] [bp-4h]@0

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
    v8 = (_WORD *)(32 * v2 + 33746652);
    do
    {
      *v5 = *v8;
      --v8;
      --v5;
      --v7;
    }
    while ( v7 > 0 );
    *(_WORD *)(2 * (16 * v2 + 1) + 0x202EEC8) = v6;
    HIWORD(dword_3004B20[10 * v1 + 4]) = 0;
  }
  if ( (unsigned __int16)word_3004B0E == 0xFFFF )
    DestroyTask(v1);
  return v10;
}
