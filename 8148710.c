int sub_8148710()
{
  __int16 v0; // r8@1
  __int16 v1; // r7@1
  int v2; // r0@2
  int v3; // r0@4
  unsigned int v4; // r5@4
  int v5; // r4@6
  unsigned int v6; // r5@8
  int v7; // r4@8
  int v8; // r0@8
  __int16 v9; // r1@8
  unsigned int v10; // r5@9
  signed int v12; // [sp+0h] [bp-24h]@1
  int v13; // [sp+20h] [bp-4h]@0

  v12 = 0;
  v0 = word_3005FBA - word_3005FB4;
  v1 = word_3005FBC - word_3005FB6;
  while ( 1 )
  {
    LOWORD(v2) = *(_WORD *)algn_3005FAA;
    if ( *(signed __int16 *)algn_3005FAA < 0 )
      v2 = -*(signed __int16 *)algn_3005FAA;
    v3 = (unsigned __int16)v2 + (unsigned __int16)word_3005FA6;
    v4 = v3 << 16;
    word_3005FA6 = v3;
    if ( word_3005FA4 < 0 )
      v12 = 1;
    v5 = ((unsigned __int16)word_3005FB8 - (unsigned __int16)word_3005FA8) & 0xFFFF;
    if ( !word_3005FA8 )
      break;
    if ( v12 )
    {
      v10 = v4 >> 24;
      v7 = 2 * v5;
      *(_WORD *)(v7 + 33673216) = sine(word_3005FA0[0], word_3005FA4 - v10) + v0;
      v8 = word_3005FA0[0];
      v9 = word_3005FA6 - v10;
    }
    else
    {
      v6 = v4 >> 24;
      v7 = 2 * v5;
      *(_WORD *)(v7 + 33673216) = sine(word_3005FA0[0], word_3005FA4 + v6) + v0;
      v8 = word_3005FA0[0];
      v9 = word_3005FA6 + v6;
    }
    *(_WORD *)(v7 + 33674240) = v1 + cosine(v8, v9);
    word_3005FA0[0] = (word_3005FA2 + word_3005FA0[0]) & 0xFF;
    --word_3005FA8;
  }
  return v13;
}
