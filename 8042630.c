int __fastcall sub_8042630(int a1, _BYTE *a2)
{
  int v2; // r8@1
  _BYTE *v3; // r7@1
  unsigned int v4; // r6@1
  int v6; // [sp+0h] [bp-44h]@2
  char v7; // [sp+14h] [bp-30h]@3
  int v8; // [sp+40h] [bp-4h]@3

  v2 = a1;
  v3 = a2;
  *a2 = -1;
  v4 = 0;
  do
  {
    pokemon_get_nick_((unsigned int *)(80 * v4 + v2), (int)(&v6 + 5 * v4));
    sub_8042614((_BYTE *)&v6 + 20 * v4, 80 * v4 + v2);
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 1 );
  StringCopy(v3, &v6);
  StringAppend(v3, &gUnknown_0842CC28);
  StringAppend(v3, &v7);
  StringAppend(v3, &gUnknown_0842CC28);
  StringAppend(v3, &gUnknown_0842CC2A);
  return v8;
}
