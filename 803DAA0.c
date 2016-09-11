signed int sub_803DAA0()
{
  signed int v0; // r6@1
  signed int result; // r0@1
  signed int i; // r5@2

  v0 = 0;
  calc_player_party_count();
  result = (unsigned __int8)byte_3004350;
  if ( byte_3004350 != 1 )
  {
    for ( i = 0; i < (unsigned __int8)byte_3004350; ++i )
    {
      if ( GetMonData((int)&unk_3004360 + 100 * i, 57, 0)
        && GetMonData((int)&unk_3004360 + 100 * i, 65, 0)
        && GetMonData((int)&unk_3004360 + 100 * i, 65, 0) != 412 )
      {
        ++v0;
      }
    }
    result = 0;
    if ( v0 <= 1 )
      result = 2;
  }
  return result;
}
