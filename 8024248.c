int atk5F_8025B24()
{
  char v0; // r3@1
  unsigned int v1; // r1@2
  int v3; // [sp+0h] [bp-4h]@0

  v0 = v2024C07;
  v2024A60 = v2024C07;
  v2024C07 = v2024C08;
  v2024C08 = v0;
  if ( v2024C6C & 0x1000 )
    v1 = v2024C6C & 0xFFFFEFFF;
  else
    v1 = v2024C6C | 0x1000;
  v2024C6C = v1;
  ++v2024C10;
  return v3;
}
