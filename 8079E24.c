int sub_8079E24()
{
  signed int i; // r5@1
  char *v1; // r0@3
  int v3; // [sp+Ch] [bp-4h]@0

  for ( i = 0; i < v2024A68; ++i )
  {
    if ( b_side_obj__get_some_boolean((unsigned __int8)i) << 24 )
    {
      gSprites[68 * *(_BYTE *)(i + 33704928) + 67] = sub_8079E90((unsigned __int8)i);
      v1 = &gSprites[68 * *(_BYTE *)(i + 33704928)];
      v1[5] = v1[5] & 0xF3 | 8;
    }
  }
  return v3;
}
