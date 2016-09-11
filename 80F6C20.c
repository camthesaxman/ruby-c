int sub_80F6C20()
{
  unsigned int v0; // r8@1
  __int16 *v1; // r6@2
  __int16 v2; // r7@2
  unsigned int v3; // r8@5
  __int16 *v4; // r5@6
  __int16 v5; // r4@6
  signed __int16 v6; // r4@10
  char v7; // r1@12
  int v9; // [sp+18h] [bp-4h]@0

  v200D158 = 0;
  v0 = 0;
  do
  {
    v1 = &gTrainerEyeTrainers[8 * v0];
    v2 = *v1;
    if ( trainer_flag_check((unsigned __int16)*v1) << 24 )
    {
      *(_WORD *)(8 * v200D158 + 0x200CEE8) = v2;
      *(_BYTE *)(8 * v200D158 + 0x200CEEC) = v0;
      *(_BYTE *)(8 * v200D158 + 0x200CEED) = *(_BYTE *)(v0 + 33710254);
      *(_WORD *)(8 * v200D158 + 0x200CEEA) = *(_BYTE *)(get_mapheader_by_bank_and_number(
                                                          (unsigned __int16)v1[5],
                                                          (unsigned __int16)v1[6])
                                                      + 20);
      ++v200D158;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0x37 );
  v3 = 0;
  do
  {
    v4 = &gUnknown_083E49C0[2 * v3];
    v5 = *v4;
    if ( trainer_flag_check((unsigned __int16)*v4) << 24 )
    {
      *(_WORD *)(8 * v200D158 + 0x200CEE8) = v5;
      *(_WORD *)(8 * v200D158 + 0x200CEEA) = v4[1];
      *(_BYTE *)(8 * v200D158 + 0x200CEED) = 0;
      *(_BYTE *)(8 * v200D158 + 0x200CEEC) = v3 + 56;
      ++v200D158;
    }
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 0xC );
  v200876C = 0;
  v2008770 = 0;
  v200876E = 0;
  if ( v200D158 > 8u )
    v6 = 7;
  else
    v6 = v200D158 - 1;
  v2008772 = v6;
  v2008774 = v200D158 - 1;
  v7 = 0;
  if ( (signed __int16)(v200D158 - 1) > 7 )
    v7 = 1;
  v20087C9 = v7;
  return v9;
}
