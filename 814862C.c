int sub_814862C()
{
  int v0; // r8@1
  int v1; // r7@1
  int v2; // r9@1
  int v3; // r6@1
  _WORD *v4; // r5@3
  _WORD *v5; // r3@3
  __int16 v6; // r2@3
  int v7; // r4@3
  int v8; // r0@4
  int v10; // [sp+0h] [bp-30h]@1
  __int16 v11; // [sp+4h] [bp-2Ch]@2
  int v12; // [sp+2Ch] [bp-4h]@0

  v0 = (unsigned __int16)word_3005FB0;
  v1 = ((unsigned __int16)word_3005FB8 - (unsigned __int16)word_3005FB0) & 0xFFFF;
  v10 = ((unsigned __int16)word_3005FAC + (unsigned __int16)word_3005FBA) & 0xFFFF;
  v2 = ((unsigned __int16)word_3005FAE + (unsigned __int16)word_3005FBC) & 0xFFFF;
  v3 = 0;
  if ( v1 - 1 > 0 )
  {
    v11 = word_3005FAC + word_3005FBA;
    do
    {
      v4 = (_WORD *)(2 * (v0 + v3));
      v5 = v4 + 16836608;
      v6 = *(_WORD *)(2 * (v0 + v3) + 0x201D000);
      v4 += 16837120;
      v7 = (*v4 - (signed __int16)v2) & 0xFFFF;
      *v5 = v6 - (unsigned int)((signed __int16)(v6 - v11) * ++v3 / v1);
      *v4 -= (signed __int16)v7 * v3 / v1;
      v3 = (unsigned __int16)v3;
    }
    while ( (unsigned __int16)v3 < v1 - 1 );
  }
  v8 = 2 * (v0 + v1);
  *(_WORD *)(v8 + 33673214) = v10;
  *(_WORD *)(v8 + 33674238) = v2;
  return v12;
}
