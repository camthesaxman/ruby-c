int sub_80C5604()
{
  signed int v0; // r5@1
  int *v1; // r4@1
  unsigned int *v2; // r4@5
  const char *v3; // r5@5
  int v5; // [sp+0h] [bp-148h]@1
  char v6; // [sp+C8h] [bp-80h]@6
  int v7; // [sp+12Ch] [bp-1Ch]@1
  int v8; // [sp+130h] [bp-18h]@5
  int v9; // [sp+144h] [bp-4h]@7

  v7 = 0;
  CpuSet(&v7, &v5, 83886155);
  v0 = 0;
  v1 = &v5;
  do
  {
    if ( *(_BYTE *)(v0 + 33788528) )
      memcpy(v1, (const char *)&dword_3004360[25 * (*(_BYTE *)(v0 + 33788528) - 1)], 100);
    v1 += 25;
    ++v0;
  }
  while ( v0 <= 2 );
  v8 = 0;
  v2 = dword_3004360;
  CpuSet(&v8, dword_3004360, 83886230);
  v3 = (const char *)&v5;
  do
  {
    memcpy(v2, v3, 100);
    v3 += 100;
    v2 += 25;
  }
  while ( (signed int)v3 <= (signed int)&v6 );
  calc_player_party_count();
  return v9;
}
