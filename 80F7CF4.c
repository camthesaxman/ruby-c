int sub_80F7CF4()
{
  unsigned int v0; // r4@4
  _BYTE *v1; // r0@4
  _BYTE *v2; // r0@4
  _BYTE *v3; // r0@4
  unsigned __int8 v4; // r1@5
  char v5; // r0@7
  int v7; // [sp+Ch] [bp-4h]@0

  if ( !v20284C9 )
    sub_80F7DC0();
  if ( *(_WORD *)(2 * v20284C9 + 0x20284CC) == 0xFFFF )
  {
    v4 = v20284CA++;
    StringCopy(&gStringVar4, *(&gUnknown_083E53A8 + *(_BYTE *)(v4 + 0x20284E0)));
  }
  else
  {
    v0 = Random() & 7;
    v1 = sub_80EB3FC(&gStringVar4, *(_WORD *)(2 * v20284C9 + 0x20284CC));
    v2 = StringCopy(v1, &gUnknown_0841134B);
    v3 = StringCopy(v2, *(&gUnknown_083E5388 + v0));
    StringCopy(v3, &gUnknown_0841134F);
  }
  if ( (unsigned __int16)Random() % 0xAu << 16 )
    v5 = v20284C9 + 1;
  else
    v5 = 10;
  v20284C9 = v5;
  v202E8DC = 1;
  return v7;
}
