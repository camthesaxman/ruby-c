int __fastcall sub_8072E24(int a1, int a2, __int16 a3)
{
  int v4; // [sp+Ch] [bp-4h]@0

  if ( (unsigned __int8)byte_30006C0 <= 0x13u )
  {
    *(_DWORD *)(12 * (unsigned __int8)byte_30006C0 + 0x202E9D8) = a1;
    *(_DWORD *)(12 * (unsigned __int8)byte_30006C0 + 0x202E9DC) = a2;
    *(_WORD *)(12 * (unsigned __int8)byte_30006C0++ + 0x202E9E0) = a3;
  }
  return v4;
}
