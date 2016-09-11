int __fastcall unref_sub_80B06E0(int a1)
{
  int v1; // r7@1
  int v2; // r5@1
  unsigned int v3; // r3@1

  v1 = a1;
  v2 = (unsigned __int8)CreateTask((int)sub_80B0748, 10);
  v3 = 0;
  do
  {
    *(_WORD *)(&byte_3004B28[40 * v2] + (8 * v3 & 0x1FF)) = *(_BYTE *)(v1 + v3);
    if ( *(_BYTE *)(v1 + v3) )
      *(_BYTE *)(4 * v3 + 0x201933A) |= 2u;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 3 );
  return v2;
}
