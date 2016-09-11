int sub_802DF30()
{
  int v0; // r0@2
  int v1; // r4@2
  int v3; // [sp+4h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    dword_3004330[v2024A60] = (int)sub_802DF88;
    v0 = byte_300434C[v2024A60];
    v1 = LOBYTE(dword_3004B20[10 * v0 + 2]);
    DestroyTask(v0);
    sub_8094E20(v1);
  }
  return v3;
}
