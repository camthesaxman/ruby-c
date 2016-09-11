int __fastcall sub_80A648C(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r0@4
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *v1 = (int)Task_BuyHowManyDialogueHandleInput;
  sub_80A4008((int)gBG1TilemapBuffer, 1u, 0xBu, 0xCu, 2u);
  MenuDrawTextWindow(0, 0xAu);
  *((_WORD *)v1 + 5) = 1;
  *((_WORD *)v1 + 6) = 1;
  *((_WORD *)v1 + 7) = 11;
  if ( v2038559 == 3 )
    sub_80A418C(1u, 1, 1, 0xBu, 3u);
  else
    sub_80A418C(1u, 1, 1, 0xBu, 2u);
  v2 = BuyMenuDisplayMessage(v203855E, 1);
  sub_80A683C(v2);
  return v4;
}
