int sub_80B5F70()
{
  int v0; // r0@2
  unsigned __int16 v2; // [sp+0h] [bp-10h]@2
  __int16 v3; // [sp+2h] [bp-Eh]@2

  if ( sub_80B6610() << 24 )
  {
    v2000000 = 2;
    ++v200000E;
    v200000E %= 3u;
    v0 = sub_80B7614();
    sub_80B77F8(v0);
    sub_80B6210(1);
    sub_80B6858(&v2, &v3);
    if ( v200000E == 2 && ((v2 - 6) & 0xFFFFu) <= 1 )
      v2 = 5;
    sub_80B680C((signed __int16)v2, v3);
    sub_80B6888(0);
  }
  return 0;
}
