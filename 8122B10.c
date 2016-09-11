int __fastcall sub_8122B10(unsigned __int8 a1)
{
  unsigned int v1; // r8@1
  int v2; // r7@2
  unsigned __int8 v3; // r4@3
  signed int v4; // r2@4
  int *v5; // r0@10
  int v7; // [sp+4h] [bp-24h]@1
  int v8; // [sp+24h] [bp-4h]@0

  v7 = a1;
  v1 = 0;
  do
  {
    v2 = 32 * v1;
    if ( !*(_WORD *)(32 * v1 + 0x2023A00) )
      goto _08122BDA;
    v3 = v1 + 3;
    sub_806E420(v1 + 3, 3, *(_WORD *)(32 * v1 + 0x2023A10), *(_WORD *)(32 * v1 + 0x2023A12));
    if ( *(_WORD *)(32 * v1 + 0x2023A10) )
    {
      v4 = (unsigned __int8)pokemon_ailments_get_primary(*(_DWORD *)(32 * v1 + 0x2023A14));
      if ( !v4 )
      {
        sub_806E1F4(v1 + 3, 3u, *(_BYTE *)(32 * v1 + 0x2023A0F));
        goto _08122B96;
      }
    }
    else
    {
      v4 = 7;
    }
    sub_806E104((unsigned __int8)(v1 + 3), 3u, (v4 - 1) & 0xFF);
_08122B96:
    sub_806E35C(*(_WORD *)(32 * v1 + 0x2023A00), *(_BYTE *)(32 * v1 + 0x2023A1C), 3u, v3, v2 + 33700356);
    StringCopy(&gStringVar1, (_BYTE *)(v2 + 33700356));
    StringGetEnd10((int)&gStringVar1);
    sub_814A568(&gStringVar1);
    box_print(v3, 3, (int)&gStringVar1);
    sub_806E574(v3, 3u, *(_WORD *)(32 * v1 + 0x2023A10), *(_WORD *)(32 * v1 + 0x2023A12));
_08122BDA:
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 2 );
  v5 = &dword_3004B20[10 * v7];
  *v5 = (int)sub_8122C18;
  *((_WORD *)v5 + 4) = 0;
  return v8;
}
