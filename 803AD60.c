int __fastcall CreateMonWithEVSpread(int a1, unsigned __int16 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r7@1
  signed int v6; // r6@1
  unsigned int v7; // r4@1
  signed int v8; // r5@1
  int v9; // r4@5
  signed int v10; // r5@5
  __int16 v12; // [sp+10h] [bp-1Ch]@5
  int v13; // [sp+28h] [bp-4h]@9

  v5 = a1;
  v6 = 0;
  CreateMon(a1, a2, a3, a4);
  v7 = a5;
  v8 = 5;
  do
  {
    if ( v7 & 1 )
      ++v6;
    v7 >>= 1;
    --v8;
  }
  while ( v8 >= 0 );
  v12 = 510 / v6;
  v9 = 1;
  v10 = 0;
  do
  {
    if ( a5 & (unsigned __int8)v9 )
      SetMonData(v5, v10 + 26, &v12);
    v9 = 2 * v9 & 0xFF;
    ++v10;
  }
  while ( v10 <= 5 );
  CalculateMonStats(v5);
  return v13;
}
