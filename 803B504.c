int __fastcall GetLevelFromMonExp(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r3@1
  signed int v4; // r2@1
  char *v5; // r1@1

  v1 = a1;
  v2 = (unsigned __int16)GetMonData(a1, 11);
  v3 = GetMonData(v1, 25);
  v4 = 1;
  v5 = (char *)&gBaseStats + 28 * v2;
  if ( gExperienceTables[101 * (unsigned __int8)v5[19] + 1] <= v3 )
  {
    do
      ++v4;
    while ( v4 <= 100 && *(&gExperienceTables[101 * (unsigned __int8)v5[19]] + v4) <= v3 );
  }
  return (v4 - 1) & 0xFF;
}
