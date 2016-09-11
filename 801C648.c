int atk02_attackstring()
{
  char v0; // r5@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = v2024A64;
  if ( !v2024A64 )
  {
    if ( !(v2024C6C & 0x600) )
    {
      b_std_message(4, v2024C07);
      v2024C6C |= 0x400u;
    }
    ++v2024C10;
    v2024D25 = v0;
  }
  return v2;
}
