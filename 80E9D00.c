int sub_80E9D00()
{
  int v0; // r4@2
  unsigned __int16 v1; // r0@2
  int v2; // r5@4
  int i; // r4@4
  unsigned __int16 v4; // r0@5
  int v6; // [sp+Ch] [bp-4h]@0

  if ( v20011C0 <= 0 )
  {
    v0 = 0xFFFF * v20011C0 & 0xFFFF;
    v1 = v200AA29 + v20011C0;
  }
  else
  {
    v0 = (unsigned __int16)v20011C0;
    v1 = v200AA29 + 4;
  }
  v2 = v1;
  for ( i = (v0 - 1) & 0xFFFF; i != 0xFFFF; i = (i - 1) & 0xFFFF )
  {
    v4 = v2;
    v2 = (v2 + 1) & 0xFFFF;
    sub_80E9AF8(v4);
  }
  return v6;
}
