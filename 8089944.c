int __fastcall sub_8089944(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // r5@1
  signed int v8; // ST18_4@1
  unsigned __int8 v9; // ST1C_1@1
  int v10; // r7@1
  int *v11; // r4@1
  __int16 *v12; // r3@2
  __int16 *v13; // r1@2
  __int16 *v14; // r2@2
  int v15; // r5@2
  int v17; // [sp+Ch] [bp-34h]@1

  v7 = a1;
  v17 = a2;
  v8 = a3;
  v9 = a4;
  dp12_8087EA4();
  sub_80895F8(a6 + 67108880, -1570766847, 1);
  v10 = (unsigned __int8)CreateTask((int)task00_for_dp12, 0);
  v11 = &dword_3004B20[10 * v10];
  *((_WORD *)v11 + 4) = v7;
  *((_WORD *)v11 + 5) = v17;
  *((_WORD *)v11 + 6) = 256 / v8;
  *((_WORD *)v11 + 7) = 0;
  *((_WORD *)v11 + 8) = a5;
  *((_WORD *)v11 + 9) = a5;
  *((_WORD *)v11 + 10) = a6;
  *((_WORD *)v11 + 11) = a7;
  byte_3004DD8 = v10;
  v202FFA4 = 0;
  sub_80898FC((int)&word_3005060, v8, v9);
  if ( v7 < v17 )
  {
    v12 = &word_3004DE0[v7 + 960];
    v13 = &word_3004DE0[v7];
    v14 = &word_3005060;
    v15 = v17 - v7;
    do
    {
      *v13 = *v14;
      *v12 = *v14;
      ++v14;
      ++v12;
      ++v13;
      --v15;
    }
    while ( v15 );
  }
  return v10;
}
