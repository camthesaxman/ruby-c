int __fastcall script_env_init(int a1, int a2, int a3)
{
  int v3; // r3@1
  signed int v4; // r1@1
  _DWORD *v5; // r0@1
  _DWORD *v6; // r0@3
  int v8; // [sp+0h] [bp-4h]@0

  v3 = a1;
  *(_BYTE *)(a1 + 1) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 92) = a2;
  *(_DWORD *)(a1 + 96) = a3;
  v4 = 3;
  v5 = (_DWORD *)(a1 + 112);
  do
  {
    *v5 = 0;
    --v5;
    --v4;
  }
  while ( v4 >= 0 );
  v6 = (_DWORD *)(v3 + 88);
  do
  {
    *v6 = 0;
    --v6;
  }
  while ( (signed int)v6 >= v3 + 12 );
  return v8;
}
