int __fastcall sub_80B146C(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  StringCopy(&gStringVar1, (_BYTE *)((a1 << 6) + 33785202));
  StringCopy(&gStringVar2, &gMoveNames[13 * *(_WORD *)(28 * v2 + 0x2019266)]);
  if ( gContestMoves[8 * *(_WORD *)(28 * v20192E1 + 0x2019266) + 1] << 29 )
  {
    switch ( gContestMoves[8 * *(_WORD *)(28 * v20192E1 + 0x2019266) + 1] & 7 )
    {
      case 1:
        StringCopy(&gStringVar3, &gUnknown_083CC288);
        break;
      case 2:
        StringCopy(&gStringVar3, &gUnknown_083CC290);
        break;
      case 3:
        StringCopy(&gStringVar3, &gUnknown_083CC299);
        break;
      default:
        StringCopy(&gStringVar3, &gUnknown_083CC2A3);
        break;
    }
  }
  else
  {
    StringCopy(&gStringVar3, &gUnknown_083CC280);
  }
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)*(&gUnknown_083CC188 + v3));
  sub_80AF138();
  sub_8002EB0(33745160, (int)&gStringVar4, 776, 1, 0xFu);
  return v5;
}
