int sub_801F728()
{
  int v0; // r2@2
  signed int v1; // r1@2
  int v3; // [sp+0h] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  if ( v2024D21 > 6u )
  {
    v0 = 88 * v2024A60;
    v1 = 33704656;
  }
  else
  {
    v0 = 88 * v2024A60;
    v1 = 33704652;
  }
  *(_DWORD *)(v0 + v1) &= ~gUnknown_081FAB5C[v2024D21];
  v2024D21 = 0;
  v2024C10 += 2;
  v2016112 = 0;
  return v3;
}
