int __fastcall sub_809D4A8(unsigned __int16 a1)
{
  unsigned __int16 v1; // r4@1
  __int16 *v2; // r1@3
  signed __int16 v3; // r0@3
  int result; // r0@5
  unsigned __int16 v5; // [sp+0h] [bp-Ch]@1

  v1 = a1;
  if ( (sub_80A2D64(a1, &v5) & 0xFFFF) == 201 )
  {
    if ( v5 )
    {
      v2 = (__int16 *)&v5;
      v3 = v5 + 412;
    }
    else
    {
      v2 = (__int16 *)&v5;
      v3 = 201;
    }
    *v2 = v3;
    result = v5;
  }
  else
  {
    result = (unsigned __int16)mon_icon_convert_unown_species_id(v1, 0);
  }
  return result;
}
