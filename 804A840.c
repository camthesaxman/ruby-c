int __fastcall sub_804A840(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  int v4; // [sp+14h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  if ( v1 >> 24 )
  {
    sub_8072DEC(v1);
    FillWindowRect_DefaultPalette(dword_3004824 + 4, 0, 0xFu, 0, 0x1Du, 0x13u);
    sub_804A96C(dword_3004824 + 200, 15, 0, &gTradePartyBoxTilemap);
    sub_804A6DC(1u);
    sub_804A41C(1u);
    sub_804A740(1u);
    sub_804A938(dword_3004824 + 200);
  }
  else
  {
    FillWindowRect_DefaultPalette(dword_3004824 + 4, 0, gUnknown_0820C330[0], 0, 0xEu, 0x13u);
    sub_804A96C(dword_3004824 + 200, 0, 0, &gTradePartyBoxTilemap);
    sub_804A6DC(0);
    sub_804A41C(0);
    sub_804A740(0);
    sub_804A938(dword_3004824 + 200);
  }
  sub_804ACD8(138593885, 32 * *(_WORD *)(dword_3004824 + 126) + 100728832, 20);
  *(_BYTE *)(dword_3004824 + 128 + v2) = 0;
  return v4;
}
