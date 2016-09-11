int sub_81018B8()
{
  int v0; // r0@3
  int v1; // r0@5
  int v2; // r0@10
  int v3; // r0@10
  int v5; // [sp+0h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC <= 6u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        v0 = sub_8101A28();
        sub_8101BA4(v0);
        goto _08101922;
      case 1:
        sub_8101A8C();
        goto _08101922;
      case 2:
        v1 = sub_8101AE0();
        sub_8101B04(v1);
        goto _08101922;
      case 3:
        sub_8101C84();
        goto _08101922;
      case 4:
        sub_8101CA0();
        goto _08101922;
      case 5:
        sub_8101CC0();
_08101922:
        ++byte_3001BAC;
        break;
      case 6:
        v2 = sub_8101CD4();
        v3 = sub_8101CEC(v2);
        sub_8101A44(v3);
        SetMainCallback2((int)sub_8101954);
        break;
      default:
        return v5;
    }
  }
  return v5;
}
