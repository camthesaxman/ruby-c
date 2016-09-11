int sub_8098734()
{
  char v0; // r3@3
  int v2; // [sp+0h] [bp-4h]@0

  if ( v20008AF )
  {
    ++v20008B0;
    if ( v20008B0 > 0x1Eu )
    {
      v20008B0 = 0;
      v0 = 0;
      if ( !v20008B1 )
        v0 = 1;
      v20008B1 = v0;
      sub_8098690();
    }
  }
  return v2;
}
