int atkC2_selectnexttarget()
{
  int v0; // r2@2
  int v2; // [sp+14h] [bp-4h]@0

  v2024C08 = 0;
  if ( v2024A68 )
  {
    do
    {
      v0 = v2024C08;
      if ( v2024C08 != v2024C07 && !(v2024C0C & gBitTable[v2024C08]) )
        break;
      ++v2024C08;
    }
    while ( ((v0 + 1) & 0xFFu) < v2024A68 );
  }
  ++v2024C10;
  return v2;
}
