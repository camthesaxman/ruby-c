int atk74_hp_tresholds_2()
{
  int v0; // r0@2
  int v1; // r4@2
  signed int v2; // r5@2
  unsigned int v3; // r4@2
  int v4; // r0@2
  char v5; // r0@5
  int v7; // [sp+10h] [bp-4h]@0

  if ( !(v20239F8 & 1) )
  {
    v0 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    v2024A60 = v0;
    v1 = (v0 ^ 1) & 0xFF;
    v2 = *(_BYTE *)((2 * battle_side_get_owner(v1) & 0x1FF) + 0x20160BC);
    v3 = *(_WORD *)(88 * v1 + 0x2024AA8);
    v4 = (signed int)(100 * (v2 - v3)) / v2;
    if ( v3 < v2 )
    {
      if ( v4 > 29 )
      {
        if ( v4 > 69 )
          v5 = 3;
        else
          v5 = 2;
      }
      else
      {
        v5 = 1;
      }
      v20160C1 = v5;
    }
    else
    {
      v20160C1 = 0;
    }
  }
  v2024C10 += 2;
  return v7;
}
