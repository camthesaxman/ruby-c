int __fastcall sub_810C23C(unsigned __int8 a1)
{
  int v1; // r1@1
  int v2; // r0@1
  int v3; // r3@3
  int v4; // r5@3
  int v5; // r6@3
  int *v6; // r2@3
  int v7; // r1@3
  int v8; // r0@3
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = (v2039248 + v2039249) & 0xFF;
  if ( v2 == v203924A )
  {
    sub_810BDAC(0);
  }
  else
  {
    v3 = 8 * v2 + 33709868;
    v4 = *(_DWORD *)(8 * v2 + 0x2025F2C);
    v5 = *(_DWORD *)(8 * v2 + 0x2025F30);
    v6 = &dword_3004B20[10 * v1];
    v7 = *(_DWORD *)(8 * *((_WORD *)v6 + 4) + 0x2025F30);
    *(_DWORD *)v3 = *(_DWORD *)(8 * *((_WORD *)v6 + 4) + 0x2025F2C);
    *(_DWORD *)(v3 + 4) = v7;
    v8 = 8 * *((_WORD *)v6 + 4) + 33709868;
    *(_DWORD *)v8 = v4;
    *(_DWORD *)(v8 + 4) = v5;
    sub_810BB88(v2039249);
    sub_810BDAC(0);
  }
  return v10;
}
