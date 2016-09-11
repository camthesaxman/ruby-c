_BOOL4 __fastcall unref_sub_8125F4C(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r1@1

  v1 = a1;
  v2 = 0;
  do
  {
    *(_BYTE *)(a1 + v2) = 0;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0xFFF );
  ReadFlash((unsigned __int8)gUnknown_08401E24, 0, a1, 4096);
  return *(_DWORD *)(v1 + 4084) == (_DWORD)&08012024 + 1;
}
