int __fastcall script_read_word(int a1)
{
  int v1; // r3@1
  _BYTE *v2; // r0@1
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r2@1
  int v6; // r4@1
  int v7; // r0@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2++;
  *(_DWORD *)(v1 + 8) = v2;
  v4 = *v2;
  v5 = (int)(v2 + 1);
  *(_DWORD *)(v1 + 8) = v2 + 1;
  v6 = v2[1];
  *(_DWORD *)(v1 + 8) = v2 + 2;
  v7 = v2[2];
  *(_DWORD *)(v1 + 8) = v5 + 2;
  return (((((v7 << 8) + v6) << 8) + v4) << 8) + v3;
}
