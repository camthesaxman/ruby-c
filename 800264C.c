int __fastcall LoadSpritePalettes(int a1)
{
  int v1; // r5@1
  int i; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  for ( i = 0; *(_DWORD *)(8 * i + v1) && (unsigned __int8)LoadSpritePalette(8 * i + v1) != 255; i = (i + 1) & 0xFF )
    ;
  return v4;
}
