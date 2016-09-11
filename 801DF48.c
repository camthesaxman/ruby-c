int atk0D_critmessage()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !v2024A64 )
  {
    if ( v2024C0D == 2 && !(v2024C68 & 0x29) )
    {
      b_std_message(217, v2024C07);
      v2024D25 = 1;
    }
    ++v2024C10;
  }
  return v1;
}
