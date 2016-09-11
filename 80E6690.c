int sub_80E6690()
{
  unsigned int v0; // r5@1
  char **v1; // r4@2
  _BYTE *v2; // r3@2
  unsigned int v3; // r5@6
  signed int v5; // [sp+0h] [bp-20h]@1
  signed int v6; // [sp+4h] [bp-1Ch]@1
  signed int v7; // [sp+8h] [bp-18h]@1
  signed int v8; // [sp+Ch] [bp-14h]@1
  int v9; // [sp+1Ch] [bp-4h]@8

  v5 = 33598592;
  v6 = 33598665;
  v7 = 33598738;
  v8 = 33598811;
  v0 = 0;
  do
  {
    v1 = &gUnknown_083DB6F4[3 * *(&gUnknown_083DB7C0[2 * v2001008] + v0)];
    v2 = StringCopy((_BYTE *)*(&v5 + 2 * v0), *v1);
    if ( *((_BYTE *)v1 + 8) )
    {
      StringCopy((_BYTE *)*(&v5 + 2 * v0 + 1), v1[1]);
    }
    else
    {
      *v2 = 0;
      StringCopy(v2 + 1, v1[1]);
      *(_BYTE *)*(&v5 + 2 * v0 + 1) = -1;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 1 );
  v3 = 0;
  do
  {
    *(_BYTE *)(v3 + 33598884) = 0;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 0x23 );
  *(_BYTE *)(v3 + 33598884) = -1;
  v200AF6E = -4;
  v200AF6F = 17;
  v200AF70 = -32;
  v200AF71 = -1;
  return v9;
}
