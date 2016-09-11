int sub_80B1928()
{
  signed int v0; // r5@1
  char *v1; // r4@2
  int v3; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = (char *)&gContestApplauseMeterGfx;
    if ( v0 < v2019217 )
      v1 = (char *)&unk_8E697CC;
    CpuSet(v1, 32 * ((*(_WORD *)&gSprites[68 * v201925C + 4] & 0x3FF) + v0 + 17) + 100728832, 67108872);
    CpuSet(v1 + 32, 32 * ((*(_WORD *)&gSprites[68 * v201925C + 4] & 0x3FF) + v0 + 25) + 100728832, 67108872);
    if ( v2019217 > 4 )
      sub_80B1A2C();
    ++v0;
  }
  while ( v0 <= 4 );
  return v3;
}
