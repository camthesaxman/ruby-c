int __fastcall sub_80E08CC(char a1)
{
  unsigned int v1; // r4@1
  char v2; // r5@1
  int v3; // r0@2
  int v5; // [sp+10h] [bp-4h]@0

  v1 = 0;
  v2 = 4 * (a1 & 3);
  do
  {
    v3 = (unsigned __int8)obj_id_for_side_relative_to_move((unsigned __int8)v1);
    if ( v3 != 255 )
      gSprites[68 * v3 + 5] = gSprites[68 * v3 + 5] & 0xF3 | v2;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 3 );
  return v5;
}
