int __fastcall StringAppendN(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // r3@1

  v3 = a1;
  a3 = (unsigned __int8)a3;
  while ( *v3 != 255 )
    ++v3;
  return StringCopyN((int)v3, a2, a3);
}
