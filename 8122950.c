int __fastcall sub_8122950(unsigned __int8 a1, int a2, int a3)
{
  unsigned __int8 v3; // r6@1
  unsigned int v4; // r5@1
  int v5; // r2@2
  unsigned __int16 v6; // r0@3
  int v8; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v4], 11, a3) )
    {
      v6 = GetMonData((int)&dword_3004360[25 * v4], 12, v5);
      sub_806DCD4(v3, v4, v6);
    }
    a3 = 32 * v4 + 33700352;
    if ( *(_WORD *)(32 * v4 + 0x2023A00) )
      sub_806DCD4(v3, v4 + 3, *(_WORD *)(32 * v4 + 0x2023A02));
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 2 );
  return v8;
}
